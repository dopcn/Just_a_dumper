//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTCameraBaseViewController.h"

@interface MTCameraPhotoViewController : MTCameraBaseViewController
{
    CDUnknownBlockType _compelteBlock;
    double _maxLength;
}

@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;
@property(copy, nonatomic) CDUnknownBlockType compelteBlock; // @synthesize compelteBlock=_compelteBlock;
- (void).cxx_destruct;
- (int)photoMaxLength;
- (id)photoAfterViewControllerWithImage:(id)arg1;
- (_Bool)shouldBeginReordAnimation;
- (void)queryPermissions;
- (void)actionBack:(id)arg1;
- (void)viewDidLoad;

@end

