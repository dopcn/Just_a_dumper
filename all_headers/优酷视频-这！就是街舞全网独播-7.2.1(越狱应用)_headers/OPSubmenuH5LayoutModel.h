//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPSubmenuLayoutModel.h"

@class DYKH5WebViewController, NSString;

@interface OPSubmenuH5LayoutModel : OPSubmenuLayoutModel
{
    DYKH5WebViewController *_h5Controller;
    NSString *_defaultTitle;
}

@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) DYKH5WebViewController *h5Controller; // @synthesize h5Controller=_h5Controller;
- (void).cxx_destruct;
- (void)setupModuleViewWithWidth:(double)arg1 urlString:(id)arg2 h5Delegate:(id)arg3 sourceController:(id)arg4;

@end

