//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PPStreamingBipInfo, PPStreamingConfigInfo, PPStreamingRequestInfo;
@protocol PPStreamingEngineDelegate;

@interface PPStreamingEngine : NSObject
{
    void *hdl;
    struct tag_ResponseInfo *_responseInfo;
    _Bool _isP2PLink;
    NSString *_realLink;
    NSString *_detailInfo;
    NSString *_playInfo;
    NSString *_bipInfo;
    NSString *_realCurrentFt;
    long long _serialnum;
    PPStreamingConfigInfo *_configInfo;
    PPStreamingRequestInfo *_openRequestInfo;
    PPStreamingBipInfo *_sBipInfo;
    CDUnknownBlockType _resetLinkWithAdvtimeBlock;
    id <PPStreamingEngineDelegate> _delegate;
    NSString *_p2phost;
}

@property _Bool isP2PLink; // @synthesize isP2PLink=_isP2PLink;
@property(retain, nonatomic) NSString *p2phost; // @synthesize p2phost=_p2phost;
@property(nonatomic) __weak id <PPStreamingEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType resetLinkWithAdvtimeBlock; // @synthesize resetLinkWithAdvtimeBlock=_resetLinkWithAdvtimeBlock;
@property(retain, nonatomic) PPStreamingBipInfo *sBipInfo; // @synthesize sBipInfo=_sBipInfo;
@property(retain, nonatomic) PPStreamingRequestInfo *openRequestInfo; // @synthesize openRequestInfo=_openRequestInfo;
@property(retain, nonatomic) PPStreamingConfigInfo *configInfo; // @synthesize configInfo=_configInfo;
@property long long serialnum; // @synthesize serialnum=_serialnum;
@property(retain, nonatomic) NSString *realCurrentFt; // @synthesize realCurrentFt=_realCurrentFt;
@property(retain, nonatomic) NSString *bipInfo; // @synthesize bipInfo=_bipInfo;
@property(retain, nonatomic) NSString *playInfo; // @synthesize playInfo=_playInfo;
@property(retain, nonatomic) NSString *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *realLink; // @synthesize realLink=_realLink;
- (void).cxx_destruct;
- (id)decodeWithString:(id)arg1;
- (void)initEngineInfo;
- (void)closeStreaming:(long long)arg1 withDetail:(id)arg2;
- (void)refreshOpenPrgInfo;
- (void)getNextStreaming:(long long)arg1 withInfo:(id)arg2;
- (void)openStreamingWithParams;
- (void)Streaming_parseStreamingInfo;
- (void)Streaming_parseBipInfo;
- (id)urlstrQueryToDictionary:(id)arg1;
- (id)getSysInfoByName:(char *)arg1;
- (void)Streaming_setConfig;
- (void)dealloc;
- (id)initWithConfigParams:(id)arg1;
- (id)init;

@end

