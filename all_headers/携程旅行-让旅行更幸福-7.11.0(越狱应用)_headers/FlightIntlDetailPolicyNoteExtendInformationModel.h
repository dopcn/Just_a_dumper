//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightIntlDetailPolicyNoteExtendInformationModel : CTBusinessBean
{
    int type;
    NSString *extendTitle;
    NSString *extendContent;
}

@property(copy, nonatomic) NSString *extendContent; // @synthesize extendContent;
@property(copy, nonatomic) NSString *extendTitle; // @synthesize extendTitle;
@property(nonatomic) int type; // @synthesize type;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

