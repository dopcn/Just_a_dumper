//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LMBaseCategory;

@interface LMCategoryOpenCellItem : NSObject
{
    unsigned long long _type;
    LMBaseCategory *_category;
}

@property(readonly, nonatomic) LMBaseCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 andCategory:(id)arg2;

@end

