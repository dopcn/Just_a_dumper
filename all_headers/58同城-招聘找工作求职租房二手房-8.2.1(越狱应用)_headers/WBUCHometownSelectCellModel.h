//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUCAccountBaseModel.h"

@class NSString;

@interface WBUCHometownSelectCellModel : WBUCAccountBaseModel
{
    _Bool _isSelected;
    NSString *_ID;
    NSString *_name;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

