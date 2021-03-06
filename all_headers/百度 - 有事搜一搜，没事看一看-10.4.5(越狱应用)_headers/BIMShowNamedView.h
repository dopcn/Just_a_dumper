//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSNumber, UIColor, UIFont, UILabel;

@interface BIMShowNamedView : UIView
{
    int _direction;
    UIColor *_tagBackgroundColor;
    UIFont *_tagFont;
    NSMutableArray *_layerArr;
    UIColor *_maleColor;
    UIColor *_femaleColor;
    double _tagsWidth;
    _Bool _titleLabelVisible;
    UILabel *_titleLabel;
    NSArray *_tags;
    NSNumber *_gender;
}

@property(retain, nonatomic) NSNumber *gender; // @synthesize gender=_gender;
@property(nonatomic, getter=isTitleLabelVisible) _Bool titleLabelVisible; // @synthesize titleLabelVisible=_titleLabelVisible;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)updateTitleLableFrame;
- (void)updateTagLayers;
- (void)updateTags:(id)arg1;
- (void)calcWidthOfAllTags;
- (void)updateTagContent:(id)arg1 withFont:(id)arg2;
- (void)handleSubLayerWithOnboardCount:(long long)arg1 needCount:(long long)arg2 withFont:(id)arg3;
- (struct CGSize)updateSizeBy:(id)arg1 font:(id)arg2;
- (void)removeAllTagLayer;
- (void)_handleTagsLayer;
- (void)setTitleLabelTitle:(id)arg1;
- (id)init;

@end

