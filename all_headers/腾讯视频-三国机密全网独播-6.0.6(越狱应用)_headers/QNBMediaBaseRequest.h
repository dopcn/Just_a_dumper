//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, QNBMediaRequestConfig;

@interface QNBMediaBaseRequest : NSObject
{
    _Bool _clipMP4;
    _Bool _charge;
    _Bool _render;
    _Bool _download;
    int _dlType;
    NSString *_vid;
    NSString *_formart;
    QNBMediaRequestConfig *_config;
    NSMutableDictionary *_exParamDic;
}

@property(nonatomic) _Bool download; // @synthesize download=_download;
@property(nonatomic) _Bool render; // @synthesize render=_render;
@property(nonatomic) _Bool charge; // @synthesize charge=_charge;
@property(nonatomic) _Bool clipMP4; // @synthesize clipMP4=_clipMP4;
@property(retain, nonatomic) NSMutableDictionary *exParamDic; // @synthesize exParamDic=_exParamDic;
@property(retain, nonatomic) QNBMediaRequestConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *formart; // @synthesize formart=_formart;
@property(nonatomic) int dlType; // @synthesize dlType=_dlType;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (id)buildDeviceInfoParameter;
- (id)buildCkeyParameter:(_Bool)arg1;
- (void)setRequestExParamWithKey:(id)arg1 value:(id)arg2;
- (id)initWithVid:(id)arg1 dlType:(int)arg2 formart:(id)arg3 config:(id)arg4;

@end

