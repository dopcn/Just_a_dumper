//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JMMyOrdersListAuthenticationCellModel, UILabel, UIView;

@interface JMMyOrdersAuthenticationCell : UITableViewCell
{
    JMMyOrdersListAuthenticationCellModel *_model;
    UILabel *_titleLabel1;
    UILabel *_detailLabel1;
    UIView *_roundedBackgroundView;
}

@property(nonatomic) __weak UIView *roundedBackgroundView; // @synthesize roundedBackgroundView=_roundedBackgroundView;
@property(nonatomic) __weak UILabel *detailLabel1; // @synthesize detailLabel1=_detailLabel1;
@property(nonatomic) __weak UILabel *titleLabel1; // @synthesize titleLabel1=_titleLabel1;
@property(nonatomic) __weak JMMyOrdersListAuthenticationCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

