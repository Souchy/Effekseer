﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Effekseer.GUI.Menu
{
    class Menu : IControl
    {
        string id = "";

        public string Label { get; set; } = string.Empty;

        public bool ShouldBeRemoved { get; private set; } = false;

        internal List<IControl> Controls = new List<IControl>();

        public Menu()
        {
            var rand = new Random();
            id = "###" + rand.Next(0xffff).ToString();
        }

        public void Update()
        {
            if(Manager.NativeManager.BeginMenu(Label + id))
            {
                foreach (var ctrl in Controls)
                {
                    ctrl.Update();
                }

                Manager.NativeManager.EndMenu();
            }
        }
    }
}
