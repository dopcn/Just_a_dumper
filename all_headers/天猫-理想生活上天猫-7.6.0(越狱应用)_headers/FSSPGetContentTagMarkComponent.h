//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FSTapsManagerComponentModel, NSMutableArray, NSString;

@interface FSSPGetContentTagMarkComponent : UIView
{
    long long lastSelectedIndex;
    FSTapsManagerComponentModel *_componentModel;
    NSString *_token;
    UIView *_labelContainer;
    NSMutableArray *_labelPool;
}

+ (struct CGSize)getTextSize:(id)arg1 maxWidth:(double)arg2;
+ (double)getComponentHeightForContent:(id)arg1 withWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *labelPool; // @synthesize labelPool=_labelPool;
@property(retain, nonatomic) UIView *labelContainer; // @synthesize labelContainer=_labelContainer;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) FSTapsManagerComponentModel *componentModel; // @synthesize componentModel=_componentModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)labelHit:(id)arg1;
- (void)configLabel:(id)arg1 isSelect:(_Bool)arg2;
- (id)getNormalLabel;
- (id)getLabelAtIndex:(long long)arg1;
- (void)setContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

