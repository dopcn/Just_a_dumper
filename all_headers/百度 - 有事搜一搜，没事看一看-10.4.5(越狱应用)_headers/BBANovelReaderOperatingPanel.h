//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BBAImageView, NSString;

@interface BBANovelReaderOperatingPanel : UIView
{
    BBAImageView *_imageView;
    NSString *_dayImageUrl;
    NSString *_nightImageUrl;
}

@property(copy, nonatomic) NSString *nightImageUrl; // @synthesize nightImageUrl=_nightImageUrl;
@property(copy, nonatomic) NSString *dayImageUrl; // @synthesize dayImageUrl=_dayImageUrl;
@property(retain, nonatomic) BBAImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)operatingPanelTap:(id)arg1;
- (void)createSubView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

