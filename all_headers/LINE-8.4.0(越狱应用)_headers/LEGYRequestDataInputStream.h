//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@class LEGYRequestData;

@interface LEGYRequestDataInputStream : NSInputStream
{
    LEGYRequestData *_requestData;
    unsigned long long _dataLength;
    unsigned long long _offset;
    _Bool _cancel;
}

- (void).cxx_destruct;
- (void)reset;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithRequestData:(id)arg1;

@end

