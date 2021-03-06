//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInputStream, PAHTTPRequest;

@interface PAInputStream : NSObject
{
    NSInputStream *stream;
    PAHTTPRequest *request;
    CDUnknownFunctionPointerType copiedCallback;
    CDStruct_4210025a copiedContext;
    unsigned long long requestedEvents;
}

+ (id)inputStreamWithData:(id)arg1 request:(id)arg2;
+ (id)inputStreamWithFileAtPath:(id)arg1 request:(id)arg2;
+ (void)initialize;
@property(nonatomic) PAHTTPRequest *request; // @synthesize request;
@property(retain, nonatomic) NSInputStream *stream; // @synthesize stream;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)dealloc;

@end

