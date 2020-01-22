using NUnit.Framework;

namespace Keytar.Test
{
    [TestFixture(Category = "Core")]
    public class KeytarTest
    {
        [Test]
        public void TestKeytar()
        {
            string service = "KeytarTestService";
            string account = "KeytarTestAccount";
            string password = "KeytarTestPassword";

            var creation = Core.Keytar.CreatePassword(service, account, password);

            Assert.True(creation);

            var get = Core.Keytar.GetPassword(service);

            Assert.AreEqual(password, get);

            var deletion = Core.Keytar.DeletePassword(service, account);

            Assert.True(deletion);
        }
    }
}