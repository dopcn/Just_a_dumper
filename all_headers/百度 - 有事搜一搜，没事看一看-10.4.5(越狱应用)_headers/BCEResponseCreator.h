//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BCERetryPromise, NSString;

@interface BCEResponseCreator : NSObject
{
    BCERetryPromise *_promise;
    NSString *_responseName;
    NSString *_handlerName;
}

@property(copy, nonatomic) NSString *handlerName; // @synthesize handlerName=_handlerName;
@property(copy, nonatomic) NSString *responseName; // @synthesize responseName=_responseName;
@property(retain, nonatomic) BCERetryPromise *promise; // @synthesize promise=_promise;
- (void).cxx_destruct;
- (id)createHandler;
- (id)createResponse;

@end

