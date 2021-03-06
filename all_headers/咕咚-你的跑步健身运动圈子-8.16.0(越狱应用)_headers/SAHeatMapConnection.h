//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSOperationQueue, NSString, NSTimer, NSURL, UIView;
@protocol SAHeatMapMessage;

@interface SAHeatMapConnection : NSObject
{
    _Bool _connected;
    NSURL *_url;
    NSDictionary *_typeToMessageClassMap;
    NSOperationQueue *_commandQueue;
    UIView *_recordingView;
    NSTimer *timer;
    id <SAHeatMapMessage> _designerMessage;
    NSString *_featureCode;
    NSString *_postUrl;
    _Bool _useGzip;
}

@property(nonatomic) _Bool useGzip; // @synthesize useGzip=_useGzip;
@property(readonly, nonatomic) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)showOpenHeatMapDialog:(id)arg1 withUrl:(id)arg2 isWifi:(_Bool)arg3;
- (void)handleMessage;
- (void)startHeatMapTimer:(id)arg1 withFeatureCode:(id)arg2 withUrl:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)designerMessageForMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)sessionObjectForKey:(id)arg1;
- (void)setSessionObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)close;
- (id)initWithURL:(id)arg1;

@end

