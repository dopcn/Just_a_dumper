//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ANCTableViewSectionObject : NSObject
{
    NSString *_headerTitle;
    NSString *_footerTitle;
    NSString *_headerText;
    NSString *_footerText;
    NSString *_identifier;
    NSMutableArray *_items;
    id _headerItem;
}

@property(retain, nonatomic) id headerItem; // @synthesize headerItem=_headerItem;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)dealloc;

@end

