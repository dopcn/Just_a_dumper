//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

@interface YWLabel : UILabel
{
    _Bool _useAttributeString;
    NSString *_originText;
}

@property(copy, nonatomic) NSString *originText; // @synthesize originText=_originText;
@property(nonatomic) _Bool useAttributeString; // @synthesize useAttributeString=_useAttributeString;
- (void).cxx_destruct;
- (id)text;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;

@end

