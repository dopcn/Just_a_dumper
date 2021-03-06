//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ConfigManager : NSObject
{
    NSMutableDictionary *_config;
    NSString *_appid;
    NSString *_iosver;
    NSString *_path;
    int _sdkWebViewConfigEnable;
    NSMutableDictionary *_apiRequests;
}

+ (id)GetInstance;
@property(nonatomic) int sdkWebViewConfigEnable; // @synthesize sdkWebViewConfigEnable=_sdkWebViewConfigEnable;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSMutableDictionary *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (int)getThirdAppSDKWebQQShare;
- (void)updateServerSDKWebQQShare:(int)arg1;
- (int)getServerSDKWebQQShare;
- (_Bool)isDataReportEnable;
- (void)requestSDKWebViewConfigResponse:(id)arg1;
- (void)requestConfigResponse:(id)arg1;
- (void)deleteAPIRequestBySeq:(id)arg1;
- (_Bool)requestSDKWebViewConfig;
- (_Bool)requestConfig;
- (void)updateConfig;
- (void)saveLocalConfig;
- (void)loadLocalConfig;
- (id)init;

@end

