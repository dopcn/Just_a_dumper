//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CTHotelChatCardViewModel : NSObject
{
    NSString *_jumpURL;
    NSString *_imgURL;
    NSString *_title;
    NSString *_tailTitle;
    NSArray *_descList;
    NSArray *_operList;
    NSArray *_vOperList;
}

@property(retain, nonatomic) NSArray *vOperList; // @synthesize vOperList=_vOperList;
@property(retain, nonatomic) NSArray *operList; // @synthesize operList=_operList;
@property(retain, nonatomic) NSArray *descList; // @synthesize descList=_descList;
@property(copy, nonatomic) NSString *tailTitle; // @synthesize tailTitle=_tailTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
- (void).cxx_destruct;
- (void)toCardViewModel:(id)arg1;

@end

