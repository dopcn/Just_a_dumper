//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class NSDate;

@interface NRTransactionData : NSArray
{
    NSArray *_backingStore;
    NSDate *_createdAt;
}

@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)description;
- (id)initWithURL:(id)arg1 carrier:(id)arg2 totalTime:(float)arg3 statusCode:(int)arg4 errorCode:(int)arg5 bytesSent:(unsigned int)arg6 bytesReceived:(unsigned int)arg7 appData:(id)arg8;
- (id)init;

@end

