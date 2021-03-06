//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol GXCompressor;

@interface GXCompressStream : NSObject
{
    NSMutableData *mutableData_;
    id <GXCompressor> compressor_;
}

+ (id)streamWithCompressor:(id)arg1 data:(id)arg2;
@property(readonly, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=mutableData_;
- (void)appendData:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithCompressor:(id)arg1 data:(id)arg2;

@end

