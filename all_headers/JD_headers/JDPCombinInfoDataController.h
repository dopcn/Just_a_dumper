//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPCombinInfoViewController;

@interface JDPCombinInfoDataController : NSObject
{
    JDPCombinInfoViewController *_viewController;
}

@property(nonatomic) __weak JDPCombinInfoViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)private_couponCellViewModelWithChannelModel:(id)arg1;
- (id)private_planCellViewModelWithChannelModel:(id)arg1;
- (id)private_channelCellViewModelWithChannelModel:(id)arg1;
- (id)private_combinChannelArray;
- (id)private_topChannelArray;
- (id)private_buttonTitle;
- (void)updateViewModel;
- (id)initWithViewController:(id)arg1;

@end

