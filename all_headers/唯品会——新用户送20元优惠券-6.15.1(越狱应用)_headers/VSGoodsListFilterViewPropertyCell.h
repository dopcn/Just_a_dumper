//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, VSFilterProperty;

@interface VSGoodsListFilterViewPropertyCell : UICollectionViewCell
{
    VSFilterProperty *_property;
    UILabel *_nameLabel;
    UIImageView *_selectedImageView;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) VSFilterProperty *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (void)changeSelected:(_Bool)arg1;
- (void)updateData:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

