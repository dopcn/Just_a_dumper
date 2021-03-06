//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NVBaseCellProtocol-Protocol.h"

@class GCActivityIndicatorView, NSString, UILabel;

@interface GCBaseModuleLoadingCell : UITableViewCell <NVBaseCellProtocol>
{
    GCActivityIndicatorView *_activityIndicator;
    UILabel *_labelForContent;
}

+ (id)cellReuseId:(id)arg1;
+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UILabel *labelForContent; // @synthesize labelForContent=_labelForContent;
@property(retain, nonatomic) GCActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setContent:(id)arg1;
- (void)setData:(id)arg1;
- (void)showActivity:(_Bool)arg1;
- (void)initialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

