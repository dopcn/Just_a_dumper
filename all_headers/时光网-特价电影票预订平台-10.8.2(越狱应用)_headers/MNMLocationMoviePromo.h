//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBModel.h"

@class MTGotoPageInfoEntity, NSString;

@interface MNMLocationMoviePromo : MTBModel
{
    NSString *_iconText;
    NSString *_title;
    MTGotoPageInfoEntity *_gotoPage;
}

@property(retain, nonatomic) MTGotoPageInfoEntity *gotoPage; // @synthesize gotoPage=_gotoPage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconText; // @synthesize iconText=_iconText;
- (void).cxx_destruct;

@end

