//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QihooNavgationController.h"

@interface PresentNaviViewController : QihooNavgationController
{
    CDUnknownBlockType _dismissCallBack;
}

+ (id)presentViewController:(id)arg1 animated:(_Bool)arg2 naviBar:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)presentNavi:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType dismissCallBack; // @synthesize dismissCallBack=_dismissCallBack;
- (void).cxx_destruct;
- (void)onClose:(id)arg1;
- (id)closeBarItem;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithRootViewController:(id)arg1;
- (void)viewDidLoad;

@end

