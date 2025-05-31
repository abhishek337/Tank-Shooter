// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class ToonTanksEditorTarget : TargetRules
{
	public ToonTanksEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

        //BuildEnvironment = TargetBuildEnvironment.Unique;

        //bOverrideBuildEnvironment = true;
        //bUseUnityBuild = false;

        ExtraModuleNames.AddRange( new string[] { "ToonTanks" } );
	}
}
