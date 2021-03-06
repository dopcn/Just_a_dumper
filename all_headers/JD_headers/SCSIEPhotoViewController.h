//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCSIEImageScrollViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol SCSIEPhotoViewControllerDelegate;

@interface SCSIEPhotoViewController : UIViewController <SCSIEImageScrollViewDelegate>
{
    NSArray *_photos;
    id <SCSIEPhotoViewControllerDelegate> _ieDelegate;
    unsigned long long _pageIndex;
}

+ (id)photoViewControllerForPageIndex:(unsigned long long)arg1;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) __weak id <SCSIEPhotoViewControllerDelegate> ieDelegate; // @synthesize ieDelegate=_ieDelegate;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
- (void).cxx_destruct;
- (void)imgScrollView:(id)arg1 didSingleTap:(struct CGPoint)arg2;
- (void)handleSingleTapWithView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithPageIndex:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

