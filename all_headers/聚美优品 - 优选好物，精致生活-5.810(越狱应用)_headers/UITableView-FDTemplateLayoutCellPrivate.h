//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class _FDTemplateLayoutCellHeightCache;

@interface UITableView (FDTemplateLayoutCellPrivate)
- (void)fd_debugLog:(id)arg1;
@property(nonatomic) _Bool fd_precacheEnabled;
@property(nonatomic) _Bool fd_autoCacheInvalidationEnabled;
@property(readonly, nonatomic) _FDTemplateLayoutCellHeightCache *fd_cellHeightCache;
- (id)fd_templateCellForReuseIdentifier:(id)arg1;
@end

