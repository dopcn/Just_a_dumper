//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JMExpressModel, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface JMExpressListCell : UITableViewCell
{
    UILabel *_expressLabel;
    UIImageView *_expressCheck;
    UIView *_bottomLine;
    JMExpressModel *_cellModel;
    NSLayoutConstraint *_bottomLineConstraints;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomLineConstraints; // @synthesize bottomLineConstraints=_bottomLineConstraints;
@property(retain, nonatomic) JMExpressModel *cellModel; // @synthesize cellModel=_cellModel;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak UIImageView *expressCheck; // @synthesize expressCheck=_expressCheck;
@property(nonatomic) __weak UILabel *expressLabel; // @synthesize expressLabel=_expressLabel;
- (void).cxx_destruct;
- (void)loadCellWithModel:(id)arg1 isLastRowInSection:(_Bool)arg2;

@end

