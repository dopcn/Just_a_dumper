//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QLTransPropertyModel, UIButton;
@protocol QLRequestModelDelegate;

@interface QLTransferPropertyCell : UITableViewCell
{
    id <QLRequestModelDelegate> _delegate;
    UIButton *_transToQQBtn;
    UIButton *_transToWXBtn;
    QLTransPropertyModel *_transModel;
}

@property(retain, nonatomic) QLTransPropertyModel *transModel; // @synthesize transModel=_transModel;
@property(retain, nonatomic) UIButton *transToWXBtn; // @synthesize transToWXBtn=_transToWXBtn;
@property(retain, nonatomic) UIButton *transToQQBtn; // @synthesize transToQQBtn=_transToQQBtn;
@property(nonatomic) id <QLRequestModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loginStateChange:(id)arg1;
- (void)didClickTransToWX;
- (void)didClickTransToQQ;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

