//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class NSMutableDictionary, NVModelBaseFeedDetail, UGCFeedSectionItem, UIViewController;

@interface UGCFeedSectionView : UITableView
{
    UGCFeedSectionItem *_sectionItem;
    NSMutableDictionary *_reuseCell;
}

+ (double)suggestHeightWithConfigration:(id)arg1 andFeedData:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *reuseCell; // @synthesize reuseCell=_reuseCell;
@property(retain, nonatomic) UGCFeedSectionItem *sectionItem; // @synthesize sectionItem=_sectionItem;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *shellVC;
@property(retain, nonatomic) NVModelBaseFeedDetail *sectionData;
@property(copy, nonatomic) CDUnknownBlockType eventCallBack;
- (id)removeInvalidProperty:(id)arg1;
- (id)initWithConfigration:(id)arg1;

@end

