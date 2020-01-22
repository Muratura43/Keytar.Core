using System.Runtime.InteropServices;

namespace Keytar.Core
{
    public class Keytar
    {
        public static string GetPassword(string service)
        {
            var result = get_password(service);
            return result;
        }

        public static bool CreatePassword(string service, string account, string password)
        {
            var result = create_password(service, account, password);
            return result == 0;
        }

        public static bool DeletePassword(string service, string account)
        {
            var result = delete_password(service, account);
            return result == 0;
        }

        [DllImport("Resources/keytar.dll")]
        private static extern string get_password(string str);

        [DllImport("Resources/keytar.dll")]
        private static extern int create_password(string service, string account, string password);

        [DllImport("Resources/keytar.dll")]
        private static extern int delete_password(string service, string account);
    }
}
