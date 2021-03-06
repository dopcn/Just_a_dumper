//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, TXPlayInfoStream;

@interface TXPlayInfoResponse : NSObject
{
    NSDictionary *_responseDict;
    NSString *_playUrl;
    NSArray *_streamList;
    TXPlayInfoStream *_source;
    TXPlayInfoStream *_master;
}

@property(retain, nonatomic) TXPlayInfoStream *master; // @synthesize master=_master;
@property(retain, nonatomic) TXPlayInfoStream *source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray *streamList; // @synthesize streamList=_streamList;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(copy) NSDictionary *responseDict; // @synthesize responseDict=_responseDict;
- (void).cxx_destruct;
@property(readonly) NSString *coverUrl;
- (id)sortedStreamList;
@property(readonly) TXPlayInfoStream *playStream;
- (id)initWithResponse:(id)arg1;

@end

