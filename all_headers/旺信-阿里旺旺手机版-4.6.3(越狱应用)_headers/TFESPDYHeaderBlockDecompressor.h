//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFESPDYHeaderBlockDecompressor : NSObject
{
    struct z_stream_s _zlibStream;
    int _zlibStreamStatus;
}

- (unsigned long long)inflate:(char *)arg1 availIn:(unsigned long long)arg2 outputBuffer:(char *)arg3 availOut:(unsigned long long)arg4 error:(id *)arg5;
- (void)dealloc;
- (id)init;

@end

