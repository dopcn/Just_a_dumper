//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRAsynchronousOperation.h"

@class NSError, NSURLResponse, NSURLSessionTask;

@interface TRAFURLSessionOperation : TRAsynchronousOperation
{
    NSError *responseError;
    id responseObject;
    NSURLResponse *response;
    NSURLSessionTask *_task;
}

+ (id)dataOperationWithManager:(id)arg1 request:(id)arg2;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError;
- (void).cxx_destruct;
- (void)cancel;
- (void)completeOperation;
- (void)main;

@end

