//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableData, NSString, RCTNetworking;

@interface RCTHTTPFormDataHelper : NSObject
{
    NSMutableArray *_parts;
    NSMutableData *_multipartBody;
    CDUnknownBlockType _callback;
    NSString *_boundary;
    RCTNetworking *_networker;
}

@property(nonatomic) __weak RCTNetworking *networker; // @synthesize networker=_networker;
- (void).cxx_destruct;
- (CDUnknownBlockType)handleResult:(id)arg1 error:(id)arg2;
- (CDUnknownBlockType)process:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

