//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, UIImageView, UILabel, VSDiscoverTopicOperationBrandCellModel;

@interface VSDiscoverTopicOperationBrandView : UIView
{
    UIImageView *_logo;
    UILabel *_nameLbl;
    UILabel *_descLbl;
    VSDiscoverTopicOperationBrandCellModel *_model;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) VSDiscoverTopicOperationBrandCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *descLbl; // @synthesize descLbl=_descLbl;
@property(retain, nonatomic) UILabel *nameLbl; // @synthesize nameLbl=_nameLbl;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;
- (void)updataViewWithObject:(id)arg1 indexPath:(id)arg2;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

