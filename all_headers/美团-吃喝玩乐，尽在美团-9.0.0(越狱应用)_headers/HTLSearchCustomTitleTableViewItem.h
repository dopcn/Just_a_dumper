//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class NSString;

@interface HTLSearchCustomTitleTableViewItem : MTTableViewItem
{
    int _cellStyle;
    NSString *_title;
    NSString *_contentTitle;
    unsigned long long _sourceType;
}

@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int cellStyle; // @synthesize cellStyle=_cellStyle;
- (void).cxx_destruct;
- (double)cellHeight;

@end

