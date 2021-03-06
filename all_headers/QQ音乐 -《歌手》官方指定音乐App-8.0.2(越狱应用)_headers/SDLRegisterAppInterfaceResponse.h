//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCResponse.h"

@class NSMutableArray, NSString, SDLDisplayCapabilities, SDLHMICapabilities, SDLLanguage, SDLPresetBankCapabilities, SDLSyncMsgVersion, SDLVehicleType;

@interface SDLRegisterAppInterfaceResponse : SDLRPCResponse
{
}

@property(retain) NSString *systemSoftwareVersion;
@property(retain) NSString *sdlVersion;
@property(retain) SDLHMICapabilities *hmiCapabilities;
@property(retain) NSMutableArray *supportedDiagModes;
@property(retain) SDLVehicleType *vehicleType;
@property(retain) NSMutableArray *audioPassThruCapabilities;
@property(retain) NSMutableArray *vrCapabilities;
@property(retain) NSMutableArray *prerecordedSpeech;
@property(retain) NSMutableArray *speechCapabilities;
@property(retain) NSMutableArray *hmiZoneCapabilities;
@property(retain) SDLPresetBankCapabilities *presetBankCapabilities;
@property(retain) NSMutableArray *softButtonCapabilities;
@property(retain) NSMutableArray *buttonCapabilities;
@property(retain) SDLDisplayCapabilities *displayCapabilities;
@property(retain) SDLLanguage *hmiDisplayLanguage;
@property(retain) SDLLanguage *language;
@property(retain) SDLSyncMsgVersion *syncMsgVersion;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

