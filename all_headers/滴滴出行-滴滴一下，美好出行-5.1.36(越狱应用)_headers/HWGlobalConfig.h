//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HWGlobalConfig : NSObject
{
    NSString *_imei;
    NSString *_serverHost;
    CDUnknownBlockType _eventHandler;
}

+ (id)globalConfig;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSString *serverHost; // @synthesize serverHost=_serverHost;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
- (void).cxx_destruct;
@property(nonatomic) _Bool isWriteGLLayerLog;
@property(nonatomic) _Bool isNORouteNoAnimated;
@property(nonatomic) _Bool isWriteServerData;
@property(nonatomic) _Bool isEraseNaviRoute;
@property(nonatomic) _Bool isWriteGPS;
- (id)init;

@end

