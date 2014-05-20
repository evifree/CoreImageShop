//
//  SCFilterParameterConfigurationCellView.h
//  CoreImageShop
//
//  Created by Simon CORSIN on 19/05/14.
//
//

#import <Cocoa/Cocoa.h>
#import "SCFilter.h"

@interface SCFilterParameterConfigurationCellView : NSTableCellView

@property (weak) IBOutlet NSTextField *titleTextField;
@property (weak) SCFilter *filter;
@property (weak) SCFilterParameterDescription *parameter;
@property (strong, nonatomic) id parameterValue;

- (void)rebuild;
- (void)updateWithParameterValue:(id)parameterValue;

@end