//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class HTLTopicPickCounponCellItem, UIImageView, UILabel, UIView;

@interface HTLTopicPickCounponCell : UIControl
{
    HTLTopicPickCounponCellItem *_item;
    UILabel *_titleLabel;
    UIImageView *_ADImageView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *ADImageView; // @synthesize ADImageView=_ADImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HTLTopicPickCounponCellItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (id)initWithPickCounponCellItem:(id)arg1;

@end

