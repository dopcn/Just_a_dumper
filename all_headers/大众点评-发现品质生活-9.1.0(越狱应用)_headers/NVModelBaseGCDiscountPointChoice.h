//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVModelBaseGCDiscountComponent.h"

@class NSString;

@interface NVModelBaseGCDiscountPointChoice : NVModelBaseGCDiscountComponent
{
    NSString *_actiontype;
    NSString *_redirecturl;
    NSString *_selectstatus;
    NSString *_memotext;
    NSString *_labeltext;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *labeltext; // @synthesize labeltext=_labeltext;
@property(copy, nonatomic) NSString *memotext; // @synthesize memotext=_memotext;
@property(copy, nonatomic) NSString *selectstatus; // @synthesize selectstatus=_selectstatus;
@property(copy, nonatomic) NSString *redirecturl; // @synthesize redirecturl=_redirecturl;
@property(copy, nonatomic) NSString *actiontype; // @synthesize actiontype=_actiontype;
- (void).cxx_destruct;

@end

