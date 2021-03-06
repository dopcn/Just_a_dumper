//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TableBindViewDelegate-Protocol.h"

@class MDProfileTitleView, NSString, UIImageView, UIView;

@interface MDProfileConnectAppCell : UITableViewCell <TableBindViewDelegate>
{
    UIImageView *_sinaView;
    MDProfileTitleView *_titleView;
    UIView *_lineView;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MDProfileTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *sinaView; // @synthesize sinaView=_sinaView;
- (void).cxx_destruct;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

