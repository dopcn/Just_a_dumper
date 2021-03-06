//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "USCParams.h"

@class NSString, USCEngineParams, USCScene, USCVADParam;

@interface USCRecoginizerParam : USCParams
{
    USCScene *_scene;
    NSString *_appkey;
    USCEngineParams *_engineParam;
    USCVADParam *_vadParam;
}

@property(retain, nonatomic) USCVADParam *vadParam; // @synthesize vadParam=_vadParam;
@property(retain, nonatomic) USCEngineParams *engineParam; // @synthesize engineParam=_engineParam;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;
- (_Bool)setVoiceField:(id)arg1;
- (_Bool)setLanguage:(id)arg1;
- (_Bool)setModelType:(id)arg1;
- (_Bool)setSampleRate:(int)arg1;
- (id)getEngineParams;
- (void)setStartScene:(id)arg1;
- (id)getAppkey;
- (id)getStartScene;
- (id)init;

@end

