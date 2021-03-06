//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SliderValidation : NSObject
{
    NSDictionary *localToken;
    CDUnknownBlockType rDidBlock;
    NSString *_appId;
    NSMutableDictionary *_context;
    NSString *_urlString;
}

+ (id)HUESliderVersion;
+ (id)HUESliderContext;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)collectData;
- (void)isRequestDid;
- (id)getToken;
- (void)saveToken:(id)arg1;
- (void)setToken:(id)arg1;
- (void)initSDKWithContext:(id)arg1 SetupCompletion:(CDUnknownBlockType)arg2 RequestDidBlock:(CDUnknownBlockType)arg3;
- (id)createViewSliderValidationWithFrame:(struct CGRect)arg1;

@end

