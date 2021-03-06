//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDYCollectionBaseTemplate.h"

@class UIImageView, UILabel, UIView;

@interface JDYGlobalSearchTemplate1 : JDYCollectionBaseTemplate
{
    UIImageView *_imageView;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    UIView *_separator;
}

+ (struct CGSize)templateItemSize;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)configAsBottom:(_Bool)arg1;
- (void)configTemplateWithItem:(id)arg1;
- (void)updateWithItem:(id)arg1;
- (void)initAllSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

