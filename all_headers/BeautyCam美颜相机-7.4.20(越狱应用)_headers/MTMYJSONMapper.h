//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTMYMapper-Protocol.h"

@class NSString;

@interface MTMYJSONMapper : NSObject <MTMYMapper>
{
    CDUnknownBlockType _JSONMap;
}

+ (id)mapperWithJSONMap:(CDUnknownBlockType)arg1;
+ (id)mapper;
@property(copy, nonatomic) CDUnknownBlockType JSONMap; // @synthesize JSONMap=_JSONMap;
- (void).cxx_destruct;
- (void)mapResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

