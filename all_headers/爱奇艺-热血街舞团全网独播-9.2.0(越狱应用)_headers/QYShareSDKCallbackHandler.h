//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYShareSDKCallbackHandler : NSObject
{
    CDUnknownBlockType _completion;
    NSString *_uuid;
}

@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)ModuleDone:(id)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

