//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface HSDetailBaseInfoBudgetView : UIView
{
    NSDictionary *_dict;
    NSString *_cateFullPath;
    UILabel *_textLabel;
    UIImageView *_imageView;
    UITapGestureRecognizer *_gesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) NSString *cateFullPath; // @synthesize cateFullPath=_cateFullPath;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;
- (void)budgetTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

