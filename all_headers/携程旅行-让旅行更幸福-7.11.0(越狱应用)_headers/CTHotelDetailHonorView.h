//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CTHotelDetailHonorView : UIView
{
    int honorViewType;
}

+ (id)cretateLableWith:(id)arg1 text:(id)arg2 isOpen:(_Bool)arg3 size:(struct CGSize)arg4;
- (void)showView;
- (void)closeView:(id)arg1;
- (id)createContenLabel:(struct CGRect)arg1 content:(id)arg2;
- (id)createFeatureTitle:(id)arg1 content:(id)arg2 viewY:(double)arg3;
- (id)createItemView:(id)arg1 title:(id)arg2 content:(id)arg3 viewY:(double)arg4;
- (void)createContentView:(id)arg1;
- (void)createTitleView:(id)arg1;
- (id)initWithData:(id)arg1 viewType:(int)arg2;

@end

