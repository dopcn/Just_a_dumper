//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseRequestModel.h"

@class NSArray, NSString;

@interface MBoxUserDiffRequestModel : BaseRequestModel
{
    _Bool _hasChange;
}

@property(nonatomic) _Bool hasChange; // @synthesize hasChange=_hasChange;
@property(readonly, nonatomic) __weak NSArray *entries;
@property(readonly, nonatomic) _Bool needReset;
@property(readonly, nonatomic) _Bool hasMore;
@property(readonly, nonatomic) __weak NSString *cursor;

@end

